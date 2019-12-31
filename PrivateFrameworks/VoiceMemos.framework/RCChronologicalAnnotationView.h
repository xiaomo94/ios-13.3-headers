/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCChronologicalAnnotationView : UIView {
    RCUIConfiguration * _UIConfiguration;
    UIColor * _backgroundDebugColor;
    double  _contentDuration;
    unsigned long long  _debugID;
    bool  _isPlayback;
    double  _majorTickMinimumSpacing;
    struct { 
        double beginTime; 
        double endTime; 
    }  _markerClippingRange;
    UIFont * _timeLabelFont;
    struct { 
        double beginTime; 
        double endTime; 
    }  _visibleTimeRange;
}

@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (nonatomic, retain) UIColor *backgroundDebugColor;
@property (nonatomic) double contentDuration;
@property (nonatomic) unsigned long long debugID;
@property (nonatomic) bool isPlayback;
@property (nonatomic) struct { double x1; double x2; } markerClippingRange;
@property (nonatomic) struct { double x1; double x2; } visibleTimeRange;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (id)_timeLabelAttributes;
- (id)_timeLabelAttributesWithFont:(id)arg1;
- (id)backgroundDebugColor;
- (double)contentDuration;
- (unsigned long long)debugID;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayback;
- (struct CGSize { double x1; double x2; })labelsSize;
- (struct { double x1; double x2; })markerClippingRange;
- (void)setBackgroundDebugColor:(id)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setDebugID:(unsigned long long)arg1;
- (void)setIsPlayback:(bool)arg1;
- (void)setMarkerClippingRange:(struct { double x1; double x2; })arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (long long)tickMarksForMajorInterval:(double)arg1;
- (double)timeLabelsMajorInterval;
- (struct { double x1; double x2; })visibleTimeRange;

@end