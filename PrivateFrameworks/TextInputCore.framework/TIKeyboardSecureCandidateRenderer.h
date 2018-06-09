/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary * _accessibilityLabelCache;
    CAContext * _context;
    NSString * _localeIdentifier;
    NSMutableDictionary * _secureCandidateCache;
}

@property (nonatomic, readonly) CAContext *context;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, retain) NSMutableDictionary *secureCandidateCache;

+ (id)allRenderers;

- (void).cxx_destruct;
- (id)_truncationSentinel;
- (id)accessibilityLabelForSlotID:(unsigned int)arg1;
- (id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3;
- (struct __CFArray { }*)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2;
- (void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned int)arg2;
- (id)cachedCandidateForSecureCandidate:(id)arg1;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)arg1;
- (void)clearSecureCandidateCache;
- (id)context;
- (void)dealloc;
- (struct CGImage { }*)imageForSendCurrentLocationWithRenderTraits:(id)arg1;
- (struct __CFArray { }*)imagesFromContexts:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id*)arg3;
- (id)init;
- (id)initForLocalizedStrings;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)localizedApplicationNameWithBundleIdentifier:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)secureCandidateCache;
- (void)setSecureCandidateCache:(id)arg1;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1;
- (id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2;

@end
