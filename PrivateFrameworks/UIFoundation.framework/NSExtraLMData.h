/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSExtraLMData : NSObject {
    NSRunStorage * _attachmentSizesRun;
    NSMutableArray * _blockRunsArray;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedFontBounds;
    double  _cachedUnderlineAdjustment;
    double  _cachedUnderlinePosition;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedUnderlineRange;
    double  _cachedUnderlineThickness;
    unsigned long long  _currentAttachmentIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentAttachmentRect;
    long long  _currentChangeInLength;
    NSLock * _fillHoleLock;
    NSTextContainer * _firstTextContainer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _firstTextViewVisibleCharRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _firstTextViewVisibleOffset;
    NSRunStorage * _fragmentRunsExtras;
    struct _NSGlyphIndexForPointCache { 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        void *textContainer; 
        unsigned long long indexCache; 
        double fractionCache; 
    }  _glyphIndexForPointCache;
    struct _NSGlyphTree { 
        struct _NSGlyphNode {} *rootNode; 
        struct _NSGlyphNode {} *curNode; 
        unsigned long long curCharIndex; 
        unsigned long long curGlyphIndex; 
    }  _glyphTree;
    double  _hyphenationFactor;
    NSMutableArray * _insertionPointCache;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastInvalidatedCharRange;
    double  _lastInvalidatedLongitudinalPosition;
    NSTextContainer * _lastInvalidatedTextContainer;
    struct _NSLayoutTree { 
        struct _NSLayoutNode {} *rootNode; 
        struct _NSLayoutNode {} *curNode; 
        unsigned long long curGlyphIndex; 
        double curLongitudinalOrigin; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } extraLineFragmentRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } extraLineFragmentUsedRect; 
        unsigned long long glyphsPerLineEstimate; 
        double offsetPerLineEstimate; 
    }  _layoutTree;
    struct __lmFlags2 { 
        unsigned int glyphCause : 6; 
        unsigned int layoutCause : 6; 
        unsigned int delegateRespondsToTempAttrs : 1; 
        unsigned int processingFirstTextViewVisible : 1; 
        unsigned int temporarySpacingChange : 1; 
        unsigned int alwaysDrawsActive : 1; 
        unsigned int usesOldShowPackedGlyphs : 1; 
        unsigned int drawsUnderlinesLikeWebKit : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int mirrorsTextAlignment : 1; 
        unsigned int forcesTrackingFloor : 1; 
        unsigned int isLiveScrolling : 1; 
        unsigned int hasCustomUnderlineColor : 1; 
        unsigned int applicationPlatformContext : 3; 
        unsigned int reserved : 6; 
    }  _lmFlags2;
    NSParagraphArbitrator * _paragraphArbitrator;
    NSLayoutManagerTextBlockRowArrayCache * _rowArrayCache;
    CUIStyleEffectConfiguration * _styleEffectConfig;
    id  _temporaryAttributes;
    struct __CFDictionary { } * _textContainerGlyphIndexes;
    struct __CFDictionary { } * _textContainerIndexes;
    double  _timeStampForResizeInScroll;
    long long  _typesetterBehavior;
    NSMutableSet * _viewProviders;
}

@end
