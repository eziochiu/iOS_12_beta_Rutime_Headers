/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem {
    NSDictionary * _attributionInfo;
    long long  _attributionType;
}

@property (nonatomic, readonly, copy) NSDictionary *attributionInfo;
@property (nonatomic, readonly) long long attributionType;
@property (nonatomic, readonly, copy) NSString *bundleID;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3;
- (id)attributionInfo;
- (long long)attributionType;
- (id)bundleID;

@end