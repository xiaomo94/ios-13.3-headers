/* Generated by RuntimeBrowser.
 */

@protocol NTKComplicationDisplay <NSObject>

@required

- (bool)canUseCurvedText;
- (<NTKComplicationDisplayObserver> *)displayObserver;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setDisplayObserver:(id <NTKComplicationDisplayObserver>)arg1;

@optional

- (bool)isHighlighted;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldUseTemplateColors:(bool)arg1;
- (bool)shouldUseTemplateColors;

@end
