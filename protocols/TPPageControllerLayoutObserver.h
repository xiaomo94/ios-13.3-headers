/* Generated by RuntimeBrowser.
 */

@protocol TPPageControllerLayoutObserver <NSObject>

@optional

- (void)pageController:(TPPageController *)arg1 didInvalidateFromPageIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3;
- (void)pageController:(TPPageController *)arg1 didLayOutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(bool)arg4;
- (void)pageController:(TPPageController *)arg1 willLayOutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(bool)arg4;

@end
