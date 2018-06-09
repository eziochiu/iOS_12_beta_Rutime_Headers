/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STGenericIntent : NSObject <NSSecureCoding> {
    bool  _appInForeground;
    NSString * _attributes;
    bool  _finishedState;
    bool  _handled;
    STGenericIntentRequest * _intentRequest;
    bool  _isLaunch;
    NSString * _name;
    NSMutableDictionary * _parameters;
    AFSiriTask * _siriTask;
    NSString * _utterance;
}

@property (nonatomic) bool appInForeground;
@property (nonatomic, copy) NSString *attributes;
@property (nonatomic) bool finishedState;
@property (nonatomic) bool handled;
@property (nonatomic, retain) STGenericIntentRequest *intentRequest;
@property (nonatomic) bool isLaunch;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *parameters;
@property (nonatomic, retain) AFSiriTask *siriTask;
@property (nonatomic, copy) NSString *utterance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addParam:(id)arg1 withValue:(id)arg2;
- (bool)appInForeground;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (void)finished;
- (bool)finishedState;
- (id)getDateRangeParameter:(id)arg1;
- (id)getGroupParameter:(id)arg1;
- (id)getPersonParameter:(id)arg1;
- (id)getPlacesParameter:(id)arg1;
- (id)getTopicParameter:(id)arg1;
- (void)handleWithProgress:(long long)arg1;
- (bool)handled;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)intentRequest;
- (bool)isLaunch;
- (id)name;
- (id)parameters;
- (void)setAppInForeground:(bool)arg1;
- (void)setAttributes:(id)arg1;
- (void)setFinishedState:(bool)arg1;
- (void)setHandled:(bool)arg1;
- (void)setIntentRequest:(id)arg1;
- (void)setIsLaunch:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setSiriTask:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)siriTask;
- (id)utterance;

@end
