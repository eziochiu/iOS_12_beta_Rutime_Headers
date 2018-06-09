/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLPreinstalledPlansBuilder : NSObject {
    NSMutableArray * _metadata;
    NSDictionary * _metadataEnvelope;
    NSMutableArray * _plans;
}

- (void).cxx_destruct;
- (void)addPlan:(id)arg1 requiringSessions:(id)arg2 label:(unsigned long long)arg3 minCount:(unsigned long long)arg4;
- (id)init;
- (void)write:(id)arg1 asBinaryPlistToPath:(id)arg2;
- (void)writeToDirectory:(id)arg1;

@end
