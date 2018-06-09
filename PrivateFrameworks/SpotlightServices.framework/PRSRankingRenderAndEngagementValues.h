/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding> {
    NSMutableArray * _engagementValues;
    NSMutableArray * _renderValues;
}

@property (retain) NSMutableArray *engagementValues;
@property (retain) NSMutableArray *renderValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementValues;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)renderValues;
- (void)setEngagementValues:(id)arg1;
- (void)setRenderValues:(id)arg1;

@end
