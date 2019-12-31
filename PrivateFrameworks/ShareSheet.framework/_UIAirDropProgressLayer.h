/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIAirDropProgressLayer : CALayer {
    double  _oneFullRotation;
    UIColor * _progressBackgroundColor;
    UIColor * _progressColor;
    double  _progressLineWidth;
    bool  _showProgressTray;
}

@property (nonatomic) double progress;
@property (nonatomic, retain) UIColor *progressBackgroundColor;
@property (nonatomic, retain) UIColor *progressColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) bool showProgressTray;

+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (id)progressBackgroundColor;
- (id)progressColor;
- (double)progressLineWidth;
- (void)setProgressBackgroundColor:(id)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)setShowProgressTray:(bool)arg1;
- (bool)showProgressTray;

@end
