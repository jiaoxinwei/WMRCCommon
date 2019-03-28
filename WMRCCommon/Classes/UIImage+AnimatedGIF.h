//
//  UIImage+AnimatedGIF.h
//  WMFramework
//
//  Created by jiaobai on 2018/5/3.
//  Copyright © 2018年 茭白. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ImageIO/ImageIO.h>

#if __has_feature(objc_arc)
#define toCF (__bridge CFTypeRef)
#define fromCF (__bridge id)
#else
#define toCF (CFTypeRef)
#define fromCF (id)
#endif
/**
 *  扩展类 让UIImage 具有播放 gif 能力
 */


@interface UIImage (AnimatedGIF)
+ (UIImage * _Nullable)animatedImageWithAnimatedGIFData:(NSData * _Nonnull)theData;
+ (UIImage * _Nullable)animatedImageWithAnimatedGIFURL:(NSURL * _Nonnull)theURL;
@end
