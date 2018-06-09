/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaPropertyWriteRequest : HMDMediaPropertyRequest {
    NSUUID * _identifier;
    id  _value;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) id value;

+ (id)deserializeWriteRequests:(id)arg1 mediaProfile:(id)arg2;
+ (id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2;
+ (id)serializeWriteRequests:(id)arg1;
+ (id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3;
+ (id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4;
- (id)value;

@end
