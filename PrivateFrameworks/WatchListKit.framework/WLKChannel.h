/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKChannel : NSObject {
    NSString * _ID;
    WLKChannelDetails * _details;
    NSDictionary * _punchoutUrls;
    NSArray * _seasonNumbers;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly, copy) WLKChannelDetails *details;
@property (nonatomic, readonly, copy) NSDictionary *punchoutUrls;
@property (nonatomic, readonly, copy) NSArray *seasonNumbers;

+ (id)channelsWithDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)ID;
- (id)details;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)punchoutUrls;
- (id)seasonNumbers;

@end
