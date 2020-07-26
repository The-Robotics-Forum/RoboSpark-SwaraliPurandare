import cv2
import numpy as np

img = cv2.imread("yellow_flower.jpg")
res = cv2.resize(img, (640, 400))

rgbl = np.array([22, 93, 0], np.uint8)
rgbh = np.array([45, 255, 255], np.uint8)

mask = cv2.inRange(res, rgbl, rgbh)

kernel = np.array(([1, 2, 3], [3, 2, 1], [2, 1, 3]), np.uint8)

blur = cv2.filter2D(mask, -1, kernel)
avg_blur = cv2.blur(mask, (5, 5))
gauss_blur = cv2.GaussianBlur(mask, (5, 5), 0)
median_blur = cv2.medianBlur(mask, 5)
bilateral_filter = cv2.bilateralFilter(mask, 5, 75, 75)

cv2.imshow("Original", res)
cv2.imshow("Masked", mask)
cv2.imshow("Blur", blur)
cv2.imshow("Average_Blur", avg_blur)
cv2.imshow("Gauss_Blur", gauss_blur)
cv2.imshow("Median_Blur", median_blur)
cv2.imshow("Bilateral_Filter", bilateral_filter)

cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite("Masked.jpg", mask)
cv2.imwrite("Blur.jpg", blur)
cv2.imwrite("Average_Blur.jpg", avg_blur)
cv2.imwrite("Gaussian_Blur.jpg", gauss_blur)
cv2.imwrite("Median_Blur.jpg", median_blur)
cv2.imwrite("Bilateral_Filtering.jpg", bilateral_filter)