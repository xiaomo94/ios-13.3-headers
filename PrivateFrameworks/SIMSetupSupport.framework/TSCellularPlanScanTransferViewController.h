/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCellularPlanScanTransferViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate, TSSetupFlowItem, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIActivityIndicatorView * _activityView;
    UILabel * _checkingAvailablePlansLabel;
    UIActivityIndicatorView * _checkingAvailablePlansSpinner;
    bool  _confirmationCodeRequired;
    UIView * _cutoutView;
    <TSSIMSetupFlowDelegate> * _delegate;
    UIButton * _enterDetailsManuallyButton;
    NSString * _fauxCardData;
    CAShapeLayer * _fillWithHoleLayer;
    CAShapeLayer * _holeOutlineLayer;
    bool  _isInEligiblePlanPresent;
    bool  _manualCardInfoEntry;
    NSDate * _nextTimeToAcceptScan;
    CTDisplayPlanList * _pendingInstallItems;
    UITableView * _pendingPlansListTableView;
    UILabel * _positionQRCodeLabel;
    bool  _receivedPendingInstallItems;
    bool  _receivedTransferItems;
    UILabel * _scanQRCodeLabel;
    UIView * _scanView;
    TSCellularPlanQRCodeScannerView * _scannerView;
    NSArray * _transferItems;
    bool  _transferring;
}

@property (nonatomic) UILabel *checkingAvailablePlansLabel;
@property (nonatomic) UIActivityIndicatorView *checkingAvailablePlansSpinner;
@property (readonly) bool confirmationCodeRequired;
@property (nonatomic) UIView *cutoutView;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIButton *enterDetailsManuallyButton;
@property (readonly) NSString *fauxCardData;
@property (readonly) unsigned long long hash;
@property (readonly) bool manualCardInfoEntry;
@property (nonatomic) UITableView *pendingPlansListTableView;
@property (nonatomic) UILabel *positionQRCodeLabel;
@property (nonatomic) UILabel *scanQRCodeLabel;
@property (nonatomic) UIView *scanView;
@property (readonly) Class superclass;
@property (readonly) bool transferring;

- (void).cxx_destruct;
- (void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)_maybeUpdateTableView;
- (id)_messageTextForActionSheet:(id)arg1 carrierName:(id)arg2 countryCode:(id)arg3;
- (void)_presentActionSheetForPendingInstall:(id)arg1;
- (void)_presentActionSheetForPlanTransfer:(id)arg1;
- (void)_startPendingInstall:(id)arg1;
- (void)_startPlanTransfer:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (id)checkingAvailablePlansLabel;
- (id)checkingAvailablePlansSpinner;
- (bool)confirmationCodeRequired;
- (id)cutoutView;
- (id)delegate;
- (void)didChangeValueForKey:(id)arg1;
- (id)enterDetailsManuallyButton;
- (void)enterFauxCardDataManually:(id)arg1;
- (id)fauxCardData;
- (id)initWithTransferItems:(id)arg1;
- (bool)manualCardInfoEntry;
- (long long)navigationBarScrollToEdgeBehavior;
- (id)pendingPlansListTableView;
- (id)positionQRCodeLabel;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)scanQRCodeLabel;
- (id)scanView;
- (void)setCheckingAvailablePlansLabel:(id)arg1;
- (void)setCheckingAvailablePlansSpinner:(id)arg1;
- (void)setCutoutView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnterDetailsManuallyButton:(id)arg1;
- (void)setPendingPlansListTableView:(id)arg1;
- (void)setPositionQRCodeLabel:(id)arg1;
- (void)setScanQRCodeLabel:(id)arg1;
- (void)setScanView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)transferring;
- (void)updatePendingInstallItems:(id)arg1;
- (void)updateTransferList:(id)arg1 isInEligiblePlanPresent:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
