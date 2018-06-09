/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRankedLayoutRequest : NSObject <NSCopying> {
    long long  _cellType;
    unsigned long long  _columnSpan;
    bool  _showAccessoryText;
    NSObject<NFLFeedTileInfo> * _tileInfo;
}

@property (nonatomic, readonly) long long cellType;
@property (nonatomic, readonly) unsigned long long columnSpan;
@property (getter=isShowingAccessoryText, nonatomic, readonly) bool showAccessoryText;
@property (nonatomic, readonly, copy) NSObject<NFLFeedTileInfo> *tileInfo;

+ (id)requestWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(bool)arg4;
+ (id)requestsWithTileInfo:(id)arg1 columnSpans:(id)arg2 cellType:(long long)arg3 showAccessoryText:(bool)arg4;

- (void).cxx_destruct;
- (long long)cellType;
- (unsigned long long)columnSpan;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isShowingAccessoryText;
- (id)tileInfo;

@end
