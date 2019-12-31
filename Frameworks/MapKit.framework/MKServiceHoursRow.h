/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKServiceHoursRow : MKPlaceSectionRowView {
    MKPlaceCompleteHoursView * _completePlaceHoursView;
    GEOLinkedService * _linkedService;
}

@property (nonatomic, retain) MKPlaceCompleteHoursView *completePlaceHoursView;
@property (nonatomic, retain) GEOLinkedService *linkedService;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)completePlaceHoursView;
- (id)initWithLinkedService:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 showTodaysHoursOnly:(bool)arg3;
- (id)linkedService;
- (void)setCompletePlaceHoursView:(id)arg1;
- (void)setLinkedService:(id)arg1;

@end