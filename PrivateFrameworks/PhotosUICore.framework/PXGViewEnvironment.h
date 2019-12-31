/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGViewEnvironment : NSObject <NSCopying> {
    bool  _accessibilityEnabled;
    UIColor * _backgroundColor;
    struct CGColor { } * _selectionHighlightColor;
    UIColor * _tintColor;
    UITraitCollection * _traitCollection;
    long long  _userInterfaceStyle;
}

@property (nonatomic, readonly) bool accessibilityEnabled;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGColor { }*selectionHighlightColor;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long userInterfaceStyle;

- (void).cxx_destruct;
- (bool)accessibilityEnabled;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 accessibilityEnabled:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGColor { }*)selectionHighlightColor;
- (id)tintColor;
- (id)traitCollection;
- (long long)userInterfaceStyle;

@end
