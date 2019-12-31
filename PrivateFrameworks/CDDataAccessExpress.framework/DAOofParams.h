/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAOofParams : NSObject {
    NSDate * _endTime;
    NSString * _externalMessage;
    int  _externalState;
    NSString * _message;
    int  _oofState;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) NSString *externalMessage;
@property (nonatomic) int externalState;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) int oofState;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForASSettingTask;
- (void)enableOof:(bool)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4;
- (id)endTime;
- (id)externalMessage;
- (int)externalState;
- (id)initWithDictionary:(id)arg1;
- (bool)isEnabled;
- (id)message;
- (int)oofState;
- (void)setEndTime:(id)arg1;
- (void)setExternalMessage:(id)arg1;
- (void)setExternalState:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setOofState:(int)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
