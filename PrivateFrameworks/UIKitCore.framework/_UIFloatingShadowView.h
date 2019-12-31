/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFloatingShadowView : UIView {
    bool  __disableOutsetShadowPath;
    double  _cornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _shadowContentsCenter;
    bool  _shadowEnabled;
    double  _shadowExpansion;
    UIImage * _shadowImage;
    double  _shadowOpacity;
    double  _shadowRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _shadowTransform;
    double  _shadowVerticalOffset;
    UIView * _shadowView;
}

@property (nonatomic) bool _disableOutsetShadowPath;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } shadowContentsCenter;
@property (getter=isShadowEnabled, nonatomic) bool shadowEnabled;
@property (nonatomic) double shadowExpansion;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowSize;
@property (nonatomic) double shadowVerticalOffset;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_disableOutsetShadowPath;
- (void)_layoutShadow;
- (void)_setShadowImageIfNeeded;
- (struct CGPath { }*)_shadowPathForSize:(struct CGSize { double x1; double x2; })arg1 radius:(double)arg2;
- (void)_updateShadowLayer;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShadowEnabled;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setShadowContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShadowEnabled:(bool)arg1;
- (void)setShadowExpansion:(double)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowVerticalOffset:(double)arg1;
- (void)set_disableOutsetShadowPath:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowContentsCenter;
- (double)shadowExpansion;
- (id)shadowImage;
- (double)shadowOpacity;
- (double)shadowRadius;
- (struct CGSize { double x1; double x2; })shadowSize;
- (double)shadowVerticalOffset;

@end
