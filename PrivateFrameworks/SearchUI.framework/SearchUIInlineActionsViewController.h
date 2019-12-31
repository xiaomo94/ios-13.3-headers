/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNActionViewDelegate, CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, NUIContainerViewDelegate> {
    UIView * _directionsButton;
    CNContactInlineActionsViewController * _inlineActionsViewController;
    double  _latitude;
    double  _longitude;
    NSData * _mapsData;
    UIView * _messageButton;
    NSURL * _messageURL;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *directionsButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContactInlineActionsViewController *inlineActionsViewController;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic, retain) UIView *messageButton;
@property (nonatomic, retain) NSURL *messageURL;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

+ (id)directionsButtonImage;
+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (id)directionsButton;
- (id)hostingViewControllerForController:(id)arg1;
- (id)inlineActionsViewController;
- (double)latitude;
- (double)longitude;
- (id)mapsData;
- (id)messageButton;
- (id)messageURL;
- (id)name;
- (void)setDirectionsButton:(id)arg1;
- (void)setInlineActionsViewController:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMessageButton:(id)arg1;
- (void)setMessageURL:(id)arg1;
- (void)setName:(id)arg1;
- (id)setupView;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end
