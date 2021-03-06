//
//  UIImage+hrExt.h
//  HRCocoaTools
//
//  Created by zhangheng1 on 2018/5/14.
//

#import <UIKit/UIKit.h>

@interface UIImage (hrExt)

/**
 *  @author Henry
 *
 *  压缩图片到适合上传的大小,默认为150K左右
 *
 *  @param image 图片对象
 *
 *  @return 压缩后的图片二进制数据
 */
+(NSData *)dataFromImageForUpload:(UIImage *)image;

/**
 *  @author Henry
 *
 *  转换图片的大小size
 *
 *  @param image   UIImage原图对象
 *  @param newSize 新的大小size
 *
 *  @return 处理后的UIImage对象
 */
+(UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;

/**
 通过指定颜色和大小方向获取一张渐变图片

 @param colors 渐变色数组
 @param imageSize 图片大小
 @param vertical 是否为垂直渐变，否则为水平渐变
 @return 生成的图片
 */
+ (UIImage *)imageFromColors:(NSArray <UIColor *> *)colors
                        size:(CGSize )imageSize
           directionVertical:(BOOL)vertical;

/**
 通过URL获取图片尺寸
 
 @param url 图片地址
 @return 图片尺寸
 */
+(CGSize)imageSizeFromUrl:(NSString *)url;

@end
