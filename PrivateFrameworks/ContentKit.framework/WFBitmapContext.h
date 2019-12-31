/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFBitmapContext : NSObject {
    struct CGContext { } * _CGContext;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGContext { }*CGContext;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)contextWithDeviceScreenScaleAndSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)contextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (id)currentContextWithScale:(double)arg1;

- (struct CGContext { }*)CGContext;
- (void)dealloc;
- (id)image;
- (id)imageWithOrientation:(unsigned int)arg1;
- (id)initWithCGContext:(struct CGContext { }*)arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end