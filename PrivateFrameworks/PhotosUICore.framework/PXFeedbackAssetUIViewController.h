/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackAssetUIViewController : UIViewController <PXAutoloopVideoTaskDelegate, PXFeedbackFormDelegate> {
    PHAsset * _asset;
    NSArray * _autoLoopFrameworkDiagnosticFileURLs;
    PXAutoloopVideoProcessTask * _autoLoopFrameworkDiagnosticsCurrentTask;
    <PXFeedbackAssetUIViewControllerDelegate> * _delegate;
    PXFeedbackLikeItOrNotComboUIViewController * _feedbackController;
    UINavigationController * _navigationController;
    NSDictionary * _negativeFeedback;
    NSDictionary * _positiveFeedback;
    bool  _userLikedIt;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) NSArray *autoLoopFrameworkDiagnosticFileURLs;
@property (nonatomic, retain) PXAutoloopVideoProcessTask *autoLoopFrameworkDiagnosticsCurrentTask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PXFeedbackAssetUIViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) NSDictionary *negativeFeedback;
@property (nonatomic, retain) NSDictionary *positiveFeedback;
@property (readonly) Class superclass;
@property (nonatomic) bool userLikedIt;

- (void).cxx_destruct;
- (void)_fileRadarWithAutoLoopAsset:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3;
- (void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)arg1;
- (id)asset;
- (id)autoLoopFrameworkDiagnosticFileURLs;
- (id)autoLoopFrameworkDiagnosticsCurrentTask;
- (void)autoloopVideoTaskStatusDidChange:(id)arg1;
- (void)continueFiling;
- (id)delegate;
- (id)feedbackController;
- (id)initWithAsset:(id)arg1 delegate:(id)arg2;
- (id)longTitleText;
- (id)navigationController;
- (id)negativeFeedback;
- (id)negativeFeedbackKeys;
- (id)positiveFeedback;
- (id)positiveFeedbackKeys;
- (void)setAsset:(id)arg1;
- (void)setAutoLoopFrameworkDiagnosticFileURLs:(id)arg1;
- (void)setAutoLoopFrameworkDiagnosticsCurrentTask:(id)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setNegativeFeedback:(id)arg1;
- (void)setPositiveFeedback:(id)arg1;
- (void)setUserLikedIt:(bool)arg1;
- (bool)shouldDisplaySecondaryFeedbackButtons;
- (void)userDidFinish:(bool)arg1;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (bool)userLikedIt;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)viewDidLoad;
- (id)viewTitleForRadar;

@end
