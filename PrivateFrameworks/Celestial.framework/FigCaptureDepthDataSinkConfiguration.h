/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _discardsLateDepthData;
    bool  _filteringEnabled;
}

@property (nonatomic) bool discardsLateDepthData;
@property (nonatomic) bool filteringEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (bool)discardsLateDepthData;
- (bool)filteringEnabled;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDiscardsLateDepthData:(bool)arg1;
- (void)setFilteringEnabled:(bool)arg1;
- (int)sinkType;

@end
