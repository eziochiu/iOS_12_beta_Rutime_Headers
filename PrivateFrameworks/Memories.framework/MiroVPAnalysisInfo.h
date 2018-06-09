/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVPAnalysisInfo : NSObject <NSCopying> {
    long long  _analysisVersion;
    unsigned long long  _flags;
    double  _junkScore;
    NSDate * _performedAnalysisDate;
    unsigned long long  _performedAnalysisTypes;
    double  _qualityScore;
    NSArray<MiroVPMetadataRangeMergeable> * _ranges;
    id  context;
}

@property (nonatomic, readonly) long long analysisVersion;
@property (nonatomic, retain) id context;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) double junkScore;
@property (nonatomic, readonly) NSDate *performedAnalysisDate;
@property (nonatomic, readonly) unsigned long long performedAnalysisTypes;
@property (nonatomic, readonly) double qualityScore;
@property (nonatomic, readonly) NSArray<MiroVPMetadataRangeMergeable> *ranges;

+ (id)analysisInfoWithFlags:(unsigned long long)arg1 analysisVersion:(long long)arg2 performedAnalysisTypes:(unsigned long long)arg3 performedAnalysisDate:(id)arg4 qualityScore:(double)arg5 junkScore:(double)arg6 ranges:(id)arg7;
+ (id)descriptionForAnalysisTypes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)analysisVersion;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)flags;
- (double)junkScore;
- (id)performedAnalysisDate;
- (unsigned long long)performedAnalysisTypes;
- (double)qualityScore;
- (id)ranges;
- (void)setContext:(id)arg1;

@end
