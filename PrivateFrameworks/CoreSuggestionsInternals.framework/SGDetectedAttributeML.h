/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDetectedAttributeML : NSObject {
    PMLAWDSessionTracker * _foundInMailSessionTracker;
    <PMLTrainingProtocol> * _localTraining;
    PMLAWDSessionTracker * _selfIdSessionTracker;
}

- (void).cxx_destruct;
- (id)detectionFromEntity:(id)arg1 ddMatch:(id)arg2 matchedContext:(id)arg3 withSupervision:(id)arg4;
- (id)detectionFromMatch:(id)arg1 plainTextContent:(id)arg2;
- (id)init;
- (id)initWithTraining:(id)arg1 foundInMailSessionTracker:(id)arg2 selfIdSessionTracker:(id)arg3;
- (id)selfIdDetectionWithEntity:(id)arg1 inConversation:(id)arg2 labelName:(id)arg3 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)spotlightReferenceFromMessage:(id)arg1;

@end
