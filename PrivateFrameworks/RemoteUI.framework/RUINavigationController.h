/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUINavigationController : UINavigationController {
    id /* block */  _menuDismissalHandler;
    unsigned long long  _ruiSupportedInterfaceOrientations;
    RUIStyle * _style;
}

@property (nonatomic, copy) id /* block */ menuDismissalHandler;
@property (nonatomic, retain) RUIStyle *style;

- (void).cxx_destruct;
- (void)_menuButtonPressed:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)loadView;
- (id /* block */)menuDismissalHandler;
- (void)setMenuDismissalHandler:(id /* block */)arg1;
- (void)setStyle:(id)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (id)style;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
