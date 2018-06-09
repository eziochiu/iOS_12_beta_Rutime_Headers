/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserHandle : NSObject <NAIdentifiable> {
    unsigned long long  _type;
    NSString * _userID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *userID;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 userID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)userID;

@end
