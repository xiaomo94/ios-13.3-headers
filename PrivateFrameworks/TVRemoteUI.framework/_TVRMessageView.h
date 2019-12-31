/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRMessageView : UIView {
    UIView * _currentView;
    unsigned long long  _messageType;
    <TVRUIStyleProvider> * _styleProvider;
    UIButton * _turnOnWiFiButton;
    bool  _wifiConnectInProgress;
}

@property (nonatomic, retain) UIView *currentView;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (nonatomic, retain) UIButton *turnOnWiFiButton;
@property (getter=isWifiConnectInProgress, nonatomic) bool wifiConnectInProgress;

- (void).cxx_destruct;
- (id)_deviceTypeString;
- (bool)_largeAccessibilityFontSizesEnabled;
- (id)_loadingViewWithTitle:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_turnOnWireless:(id)arg1;
- (void)clearContent;
- (id)currentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isWifiConnectInProgress;
- (void)layoutSubviews;
- (unsigned long long)messageType;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCurrentView:(id)arg1;
- (void)setMessageType:(unsigned long long)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTurnOnWiFiButton:(id)arg1;
- (void)setWifiConnectInProgress:(bool)arg1;
- (void)showLoadingSpinner;
- (void)showMessageWithError:(id)arg1 andDevice:(id)arg2;
- (void)showMessageWithError:(id)arg1 device:(id)arg2;
- (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
- (void)showNoAssociatedNetworkMessage;
- (void)showNoWIFIConnectionMessage;
- (void)showSearchingSpinner;
- (id)styleProvider;
- (id)turnOnWiFiButton;

@end
