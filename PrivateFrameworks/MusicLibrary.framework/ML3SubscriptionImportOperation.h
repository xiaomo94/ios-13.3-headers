/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SubscriptionImportOperation : ML3DAAPImportOperation

- (bool)_performDAAPImportWithTransaction:(id)arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 withTrackIds:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })arg2 trackPersonIdentifiers:(struct vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > { struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x1; struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x2; struct __compressed_pair<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > *, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > { struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x_3_1_1; } x3; })arg3;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (unsigned long long)importSource;
- (void)main;
- (void)updateImportProgress:(float)arg1;

@end
