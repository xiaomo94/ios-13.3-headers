/* Generated by RuntimeBrowser.
 */

@protocol ARPresentationDelegate <NSObject>

@optional

- (ARPresentationDescriptor *)presentation:(ARPresentation *)arg1 descriptorForTransitionToDisplay:(ARPresentationDisplay *)arg2;
- (void)presentation:(ARPresentation *)arg1 didTransitionToDisplay:(ARPresentationDisplay *)arg2;
- (void)presentationIsReadyForNextRender:(ARPresentation *)arg1;

@end
