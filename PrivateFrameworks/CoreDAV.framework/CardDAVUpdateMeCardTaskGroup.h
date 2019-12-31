/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    NSURL * _cardURL;
    NSURL * _homeURL;
}

@property (nonatomic, readonly) NSURL *cardURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *homeURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newPropPatchTask;
- (id)cardURL;
- (id)description;
- (id)homeURL;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;

@end
