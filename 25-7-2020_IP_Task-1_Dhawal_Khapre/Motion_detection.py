import cv2

cap = cv2.VideoCapture(0)
ret, old = cap.read(0)

while True:
    ret, new = cap.read(0)
    diff = cv2.absdiff(old, new)
    cv2.imshow('Original', new)
    cv2.imshow('Motion_detection', diff)

    old = new

    k = cv2.waitKey(1)
    if k == 32:
        break

cap.release()
cv2.destroyAllWindows()