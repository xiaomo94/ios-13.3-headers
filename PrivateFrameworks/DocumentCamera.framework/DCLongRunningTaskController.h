/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

@interface DCLongRunningTaskController : NSObject <DCProgressViewControllerDelegate> {
    id /* block */  _completionBlock;
    double  _intervalBeforeOpeningProgressDialog;
    bool  _isCancelled;
    id  _keepAlive;
    NSDate * _lastAccessibilityAnnouncementDate;
    NSDate * _openProgressDate;
    NSProgress * _progress;
    NSString * _progressFormatString;
    DCProgressViewController * _progressViewController;
    bool  _progressViewControllerDidFinishPresenting;
    bool  _shouldDismissProgressViewController;
    bool  _shouldShowCancelButton;
    bool  _shouldShowCircularProgress;
    id /* block */  _updateProgressUIBlock;
    struct UIViewController { Class x1; } * _viewControllerToPresentFrom;
    struct UIWindow { Class x1; } * _window;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (nonatomic) bool isCancelled;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, retain) NSDate *lastAccessibilityAnnouncementDate;
@property (nonatomic, retain) NSDate *openProgressDate;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSString *progressFormatString;
@property (nonatomic, retain) DCProgressViewController *progressViewController;
@property (nonatomic) bool progressViewControllerDidFinishPresenting;
@property (nonatomic) bool shouldDismissProgressViewController;
@property (nonatomic) bool shouldShowCancelButton;
@property (nonatomic) bool shouldShowCircularProgress;
@property (nonatomic, copy) id /* block */ updateProgressUIBlock;
@property (nonatomic, retain) UIViewController *viewControllerToPresentFrom;
@property (nonatomic, retain) UIWindow *window;

+ (void)setMainWindow:(struct UIWindow { Class x1; }*)arg1;

- (void).cxx_destruct;
- (void)closeProgressDialog;
- (void)completeTaskIfNecessary;
- (id /* block */)completionBlock;
- (id)init;
- (id)initWithWindow:(struct UIWindow { Class x1; }*)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (double)intervalBeforeOpeningProgressDialog;
- (bool)isCancelled;
- (id)keepAlive;
- (id)lastAccessibilityAnnouncementDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)openProgressDate;
- (void)openProgressDialog;
- (id)progress;
- (id)progressFormatString;
- (id)progressViewController;
- (bool)progressViewControllerDidFinishPresenting;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setIntervalBeforeOpeningProgressDialog:(double)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setKeepAlive:(id)arg1;
- (void)setLastAccessibilityAnnouncementDate:(id)arg1;
- (void)setOpenProgressDate:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressFormatString:(id)arg1;
- (void)setProgressViewController:(id)arg1;
- (void)setProgressViewControllerDidFinishPresenting:(bool)arg1;
- (void)setShouldDismissProgressViewController:(bool)arg1;
- (void)setShouldShowCancelButton:(bool)arg1;
- (void)setShouldShowCircularProgress:(bool)arg1;
- (void)setUpdateProgressUIBlock:(id /* block */)arg1;
- (void)setViewControllerToPresentFrom:(struct UIViewController { Class x1; }*)arg1;
- (void)setWindow:(struct UIWindow { Class x1; }*)arg1;
- (bool)shouldDismissProgressViewController;
- (bool)shouldShowCancelButton;
- (bool)shouldShowCircularProgress;
- (void)startTask:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)updateProgress;
- (id /* block */)updateProgressUIBlock;
- (struct UIViewController { Class x1; }*)viewControllerToPresentFrom;
- (void)willDismissProgressViewController:(id)arg1;
- (struct UIWindow { Class x1; }*)window;

@end
