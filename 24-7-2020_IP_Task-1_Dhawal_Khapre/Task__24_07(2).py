import cv2
import numpy as np

img = cv2.imread('yellow_flower.jpg')
img = cv2.resize(img, (400, 640))

img = cv2.rectangle(img, (80, 560), (320, 639), (120, 150, 200), -1)

font = cv2.FONT_HERSHEY_DUPLEX
cv2.putText(img, 'Sunflower', (50, 80), font, 2, (255, 255, 255), 5, cv2.LINE_AA)

cv2.imshow('Flower', img)

cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite("Flower_Pot.jpg", img)