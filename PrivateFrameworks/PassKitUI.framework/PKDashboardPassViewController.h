/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardPassViewController : PKDashboardViewController <BKOperationDelegate, PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultPasscodeButtonSize;
    BKPresenceDetectOperation * _fingerDetectionOperation;
    bool  _fingerPresent;
    NSObject<OS_dispatch_source> * _fingerTimer;
    _PKUIKVisibilityBackdropView * _footerBackground;
    bool  _footerVisible;
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _foregroundActiveState;
    PKPass * _frontmostPass;
    PKPaymentPass * _frontmostPaymentPass;
    bool  _invalidated;
    UIButton * _passcodeButton;
    unsigned char  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDashboardPassViewControllerDelegate><PKDashboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPass *frontmostPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createFooter;
- (void)_passcodeTapped:(id)arg1;
- (void)_updateFingerDetection;
- (void)_updateFooterAnimated:(bool)arg1;
- (void)_updatePasscodeButtonTitle;
- (void)_visibilityDidChange;
- (void)dealloc;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)frontmostPass;
- (void)invalidate;
- (void)loadView;
- (void)operation:(id)arg1 presenceStateChanged:(bool)arg2;
- (void)setFrontmostPass:(id)arg1;
- (void)showStatement:(id)arg1 account:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end
