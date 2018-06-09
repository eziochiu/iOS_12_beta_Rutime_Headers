/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSHash : NSObject {
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _ctx;
    NSData * _finalData;
    bool  _finalized;
}

@property (nonatomic) struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; } ctx;
@property (nonatomic, copy) NSData *finalData;
@property (getter=isFinalized, nonatomic) bool finalized;

- (void).cxx_destruct;
- (struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })ctx;
- (void)dealloc;
- (id)finalData;
- (id)init;
- (bool)isFinalized;
- (void)setCtx:(struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })arg1;
- (void)setFinalData:(id)arg1;
- (void)setFinalized:(bool)arg1;
- (void)updateWithData:(id)arg1;
- (void)updateWithDate:(id)arg1;
- (void)updateWithInteger:(long long)arg1;
- (void)updateWithString:(id)arg1;
- (void)updateWithUUID:(id)arg1;

@end
