/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsDOMChange : NSObject <NSCopying> {
    double  _buildEndTime;
    double  _buildStartTime;
    bool  _fromDeferredMessage;
    double  _renderEndTime;
    double  _renderStartTime;
}

@property (nonatomic) double buildEndTime;
@property (nonatomic) double buildStartTime;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=isFromDeferredMessage, nonatomic) bool fromDeferredMessage;
@property (nonatomic) double renderEndTime;
@property (nonatomic) double renderStartTime;

- (double)buildEndTime;
- (double)buildStartTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithReportDomBuildTimesMessagePayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromDeferredMessage;
- (double)renderEndTime;
- (double)renderStartTime;
- (void)setBuildEndTime:(double)arg1;
- (void)setBuildStartTime:(double)arg1;
- (void)setFromDeferredMessage:(bool)arg1;
- (void)setRenderEndTime:(double)arg1;
- (void)setRenderStartTime:(double)arg1;

@end