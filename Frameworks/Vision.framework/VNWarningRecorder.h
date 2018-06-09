/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNWarningRecorder : NSObject <VNWarningRecorder> {
    NSMutableDictionary * _warnings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasWarnings;
- (id)init;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (void)recordWarnings:(id)arg1;
- (void)setWarnings:(id)arg1;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end
