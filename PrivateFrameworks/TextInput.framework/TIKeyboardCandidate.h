/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {
    NSString * _alternativeText;
    NSString * _annotationText;
    unsigned long long  _customInfoType;
    unsigned long long  _indexForMetrics;
    bool  _isSendCurrentLocation;
    bool  _responseCandidate;
    unsigned int  _slotID;
}

@property (getter=isOTAWordListCandidate, nonatomic, readonly) bool OTAWordListCandidate;
@property (nonatomic, copy) NSString *alternativeText;
@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic, readonly) NSString *candidate;
@property (getter=isCompletionCandidate, nonatomic, readonly) bool completionCandidate;
@property (nonatomic, readonly) long long cursorMovement;
@property (nonatomic) unsigned long long customInfoType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deleteCount;
@property (readonly, copy) NSString *description;
@property (getter=isEmojiCandidate, nonatomic, readonly) bool emojiCandidate;
@property (getter=isExtensionCandidate, nonatomic, readonly) bool extensionCandidate;
@property (getter=isFacemarkCandidate, nonatomic, readonly) bool facemarkCandidate;
@property (getter=isFullwidthCandidate, nonatomic, readonly) bool fullwidthCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexForMetrics;
@property (getter=isInlineCompletionCandidate, nonatomic, readonly) bool inlineCompletionCandidate;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) bool isAddress;
@property (nonatomic, readonly) bool isAutocorrection;
@property (nonatomic, readonly) bool isAutofillCandidate;
@property (nonatomic, readonly) bool isForShortcutConversion;
@property (nonatomic) bool isSendCurrentLocation;
@property (nonatomic, readonly) bool isSlottedCandidate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) TIProactiveTrigger *proactiveTrigger;
@property (getter=isPunctuationCompletionCandidate, nonatomic, readonly) bool punctuationCompletionCandidate;
@property (getter=isPunctuationKeyCandidate, nonatomic, readonly) bool punctuationKeyCandidate;
@property (getter=isRegionalCandidate, nonatomic, readonly) bool regionalCandidate;
@property (getter=isResponseCandidate, nonatomic, readonly) bool responseCandidate;
@property (nonatomic, readonly) NSString *responseKitCategory;
@property (getter=isSecureContentCandidate, nonatomic, readonly) bool secureContentCandidate;
@property (nonatomic) unsigned int slotID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int usageTrackingMask;
@property (nonatomic, readonly) unsigned long long wordOriginFeedbackID;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)alternativeText;
- (id)annotationText;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (unsigned long long)customInfoType;
- (unsigned long long)deleteCount;
- (id)description;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForMetrics;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (bool)isAddress;
- (bool)isAutocorrection;
- (bool)isCompletionCandidate;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isFacemarkCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isInlineCompletionCandidate;
- (bool)isOTAWordListCandidate;
- (bool)isPunctuation;
- (bool)isPunctuationCompletionCandidate;
- (bool)isPunctuationKeyCandidate;
- (bool)isRegionalCandidate;
- (bool)isResponseCandidate;
- (bool)isSecureContentCandidate;
- (bool)isSendCurrentLocation;
- (id)label;
- (id)proactiveTrigger;
- (id)responseKitCategory;
- (void)setAlternativeText:(id)arg1;
- (void)setAnnotationText:(id)arg1;
- (void)setCustomInfoType:(unsigned long long)arg1;
- (void)setIndexForMetrics:(unsigned long long)arg1;
- (void)setIsSendCurrentLocation:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (unsigned int)slotID;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)isAutofillCandidate;
- (bool)isSlottedCandidate;

@end
