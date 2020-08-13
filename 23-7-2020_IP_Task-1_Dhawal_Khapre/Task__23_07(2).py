import cv2

img = cv2.imread("Img_Grayscale.jpg", 0)

ret, thresh = cv2.threshold(img, 150, 255, cv2.THRESH_BINARY)
thresh_mean = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 5, 2)
thresh_gauss = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 5, 2)

cv2.imshow("Original", img)
cv2.imshow("Threshold", thresh)
cv2.imshow("Mean_Threshold", thresh_mean)
cv2.imshow("Gaussian_Threshold", thresh_gauss)

cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite("Threshold.jpg", thresh)
cv2.imwrite("Mean_Threshold.jpg", thresh_mean)
cv2.imwrite("Gauss_Threshold.jpg", thresh_gauss)