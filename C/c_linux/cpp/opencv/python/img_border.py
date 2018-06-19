import cv2
import numpy as np
from matplotlib import pyplot as plt
BLUE=[255,0,0]
img1=cv2.imread('baby2.jpeg')
replicate=cv2.copyMakeBorder(img1,40,10,10,10,cv2.BORDER_REPLICATE)
reflect=cv2.copyMakeBorder(img1,130,10,10,10,cv2.BORDER_REFLECT)
reflect101=cv2.copyMakeBorder(img1,130,10,10,10,cv2.BORDER_REFLECT_101)
wrap=cv2.copyMakeBorder(img1,40,10,10,10,cv2.BORDER_WRAP)
constant=cv2.copyMakeBorder(img1,40,10,10,10,cv2.BORDER_CONSTANT,value=BLUE)
#plt.subplot(231),plt.imshow(img1,'gray'),plt.title('ORIGINAL')
#plt.subplot(232),plt.imshow(replicate,'gray'),plt.title('REPLICATE')
#plt.subplot(231),plt.imshow(reflect,'gray'),plt.title('reflect')
#plt.subplot(231),plt.imshow(reflect101,'gray'),plt.title('reflect101')
#plt.subplot(231),plt.imshow(wrap,'gray'),plt.title('wrap')
#plt.subplot(231),plt.imshow(constant,'gray'),plt.title('constant')
#plt.show()
cv2.imshow("original",img1)
cv2.imshow("replicate",replicate)
cv2.imshow("reflect",reflect)
cv2.imshow("reflect101",reflect101)
cv2.imshow("wrap",wrap)
cv2.imshow("const",constant)
cv2.waitKey(0)
cv2.destroyAllWindows()
