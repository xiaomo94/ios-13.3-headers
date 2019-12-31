/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIChoiceView : UIView {
    UIButton * _bigChoice;
    UIView * _buttonTray;
    long long  _currentStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _customSafeAreaInsets;
    RUIElement * _header;
    BFFPaneHeaderView_RemoteUI * _headerView;
    UIScrollView * _scrollView;
    UIButton * _smallChoice;
    RUISubHeaderElement * _subHeader;
    RUIChoiceViewElement * _target;
    _UIBackdropView * _trayBackdrop;
    bool  _usesTwoButtonLayout;
}

@property (nonatomic, readonly) UIButton *bigChoice;
@property (nonatomic, readonly) UIView *buttonTray;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customSafeAreaInsets;
@property (nonatomic, retain) RUIElement *header;
@property (nonatomic, readonly) UIView<RUIHeader> *headerView;
@property (nonatomic, readonly) UIButton *smallChoice;
@property (nonatomic, retain) RUISubHeaderElement *subHeader;
@property (nonatomic) RUIChoiceViewElement *target;
@property (nonatomic) bool usesTwoButtonLayout;

- (void).cxx_destruct;
- (void)_updateTrayBackdrop;
- (id)bigChoice;
- (id)buttonTray;
- (void)choiceTapped:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customSafeAreaInsets;
- (id)header;
- (id)headerView;
- (id)init;
- (void)layoutSubviews;
- (void)setCustomSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFirstChoiceTitle:(id)arg1 withColor:(id)arg2;
- (void)setHeader:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHelpLinkTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondChoiceTitle:(id)arg1 withColor:(id)arg2;
- (void)setSubHeader:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setUsesTwoButtonLayout:(bool)arg1;
- (id)smallChoice;
- (id)subHeader;
- (id)target;
- (id)titleLabel;
- (bool)usesTwoButtonLayout;

@end
