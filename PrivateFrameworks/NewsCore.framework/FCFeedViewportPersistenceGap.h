/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement> {
    NSString * _firstGroupID;
    NSArray * _hiddenElements;
    NSString * _identifier;
    NSString * _lastGroupID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly, copy) NSString *firstGroupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *hiddenElements;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *lastGroupID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithHiddenElements:(id)arg1;
- (id)copyWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)feedElementType;
- (id)firstGroupID;
- (unsigned long long)hash;
- (id)hiddenElements;
- (id)identifier;
- (id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3;
- (id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isGap;
- (id)lastGroupID;

@end
