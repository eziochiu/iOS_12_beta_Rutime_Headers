/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingSettings : PXSettings {
    unsigned long long  _confidentialityWarningsVersion;
    bool  _sharingSuggestionsWidgetAllStreamEnabled;
    bool  _sharingSuggestionsWidgetCoreDuetEnabled;
    bool  _sharingSuggestionsWidgetHeuristicsEnabled;
    bool  _sharingSuggestionsWidgetLearningEnabled;
    bool  _showConfidentialityWarnings;
    bool  _showInternalGIFExport;
}

@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) bool sharingSuggestionsWidgetAllStreamEnabled;
@property (nonatomic) bool sharingSuggestionsWidgetCoreDuetEnabled;
@property (nonatomic) bool sharingSuggestionsWidgetHeuristicsEnabled;
@property (nonatomic) bool sharingSuggestionsWidgetLearningEnabled;
@property (nonatomic) bool showConfidentialityWarnings;
@property (nonatomic) bool showInternalGIFExport;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (unsigned long long)confidentialityWarningsVersion;
- (id)debugDescription;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (id)parentSettings;
- (void)setConfidentialityWarningsVersion:(unsigned long long)arg1;
- (void)setDefaultValues;
- (void)setSharingSuggestionsWidgetAllStreamEnabled:(bool)arg1;
- (void)setSharingSuggestionsWidgetCoreDuetEnabled:(bool)arg1;
- (void)setSharingSuggestionsWidgetHeuristicsEnabled:(bool)arg1;
- (void)setSharingSuggestionsWidgetLearningEnabled:(bool)arg1;
- (void)setShowConfidentialityWarnings:(bool)arg1;
- (void)setShowInternalGIFExport:(bool)arg1;
- (bool)sharingSuggestionsWidgetAllStreamEnabled;
- (bool)sharingSuggestionsWidgetCoreDuetEnabled;
- (bool)sharingSuggestionsWidgetHeuristicsEnabled;
- (bool)sharingSuggestionsWidgetLearningEnabled;
- (bool)showConfidentialityWarnings;
- (bool)showInternalGIFExport;

@end
