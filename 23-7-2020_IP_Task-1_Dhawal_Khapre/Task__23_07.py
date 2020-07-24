import cv2

img = cv2.imread("text.jpg")
img1 = cv2.resize(img, (400, 400))

print(img.shape)
print(img.size)
print(img1.shape)
print(img1.size)

img_gray = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
img_hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)

cv2.imshow("Original", img)
cv2.imshow("Resized", img1)
cv2.imshow("Grayscale", img_gray)
cv2.imshow("HSV", img_hsv)

cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite("Img_Grayscale.jpg", img_gray)
cv2.imwrite("Img_HSV.jpg", img_hsv)