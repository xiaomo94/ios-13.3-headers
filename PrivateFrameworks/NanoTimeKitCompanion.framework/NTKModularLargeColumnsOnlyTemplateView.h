/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView {
    NTKColoringLabel * _row1Column1Label;
    NTKColoringLabel * _row1Column2Label;
    UIView<NTKComplicationImageView> * _row1ImageView;
    NTKColoringLabel * _row2Column1Label;
    NTKColoringLabel * _row2Column2Label;
    UIView<NTKComplicationImageView> * _row2ImageView;
    NTKColoringLabel * _row3Column1Label;
    NTKColoringLabel * _row3Column2Label;
    UIView<NTKComplicationImageView> * _row3ImageView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateColumnRowsWithBlock:(id /* block */)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
