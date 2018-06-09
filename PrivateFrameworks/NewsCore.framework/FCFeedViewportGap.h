/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportGap : NSObject <FCFeedElement> {
    NSString * _identifier;
    FCFeedRefreshSession * _refreshSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long feedElementType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FCFeedRefreshSession *refreshSession;
@property (readonly) Class superclass;

+ (id)gapFromPBGap:(id)arg1;
+ (id)pbGapFromGap:(id)arg1 refreshSession:(id)arg2 sharedStringIndex:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithRefreshSession:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)feedElementType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithRefreshSession:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGap;
- (id)refreshSession;

@end
