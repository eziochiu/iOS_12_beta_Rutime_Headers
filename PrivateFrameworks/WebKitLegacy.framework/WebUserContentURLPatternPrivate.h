/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUserContentURLPatternPrivate : NSObject {
    struct UserContentURLPattern { 
        bool m_invalid; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_scheme; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_host; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_path; 
        bool m_matchSubdomains; 
    }  pattern;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
