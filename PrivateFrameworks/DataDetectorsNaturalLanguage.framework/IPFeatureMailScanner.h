/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureMailScanner : IPFeatureScanner {
    IPFeatureData * _dateInSubjectFeatureData;
    NSMutableArray * _subjectAndBodyDataDetectorsFeatures;
    bool  _subjectContainsDate;
    NSArray * _subjectDataDetectorsFeatures;
    NSMutableArray * _subjectKeywordFeatures;
    NSArray * _subjectSentenceFeatures;
}

@property (retain) IPFeatureData *dateInSubjectFeatureData;
@property (retain) NSMutableArray *subjectAndBodyDataDetectorsFeatures;
@property bool subjectContainsDate;
@property (retain) NSArray *subjectDataDetectorsFeatures;
@property (retain) NSMutableArray *subjectKeywordFeatures;
@property (retain) NSArray *subjectSentenceFeatures;

- (void).cxx_destruct;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (id)dateInSubjectFeatureData;
- (void)doSynchronousScanWithCompletionHandler:(id /* block */)arg1;
- (id)emailParticipantNames;
- (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(id)arg3 dataFeatures:(id)arg4;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;
- (bool)isBlacklistedSender:(id)arg1;
- (void)processScanOfMessageUnit:(id)arg1;
- (void)resetScanState;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setDateInSubjectFeatureData:(id)arg1;
- (void)setSubjectAndBodyDataDetectorsFeatures:(id)arg1;
- (void)setSubjectContainsDate:(bool)arg1;
- (void)setSubjectDataDetectorsFeatures:(id)arg1;
- (void)setSubjectKeywordFeatures:(id)arg1;
- (void)setSubjectSentenceFeatures:(id)arg1;
- (id)subjectAndBodyDataDetectorsFeatures;
- (bool)subjectContainsDate;
- (id)subjectDataDetectorsFeatures;
- (id)subjectKeywordFeatures;
- (id)subjectSentenceFeatures;

@end
