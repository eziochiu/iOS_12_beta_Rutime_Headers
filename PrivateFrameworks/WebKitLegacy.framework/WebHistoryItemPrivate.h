/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistoryItemPrivate : NSObject {
    struct RefPtr<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> > { 
        struct HistoryItem {} *m_ptr; 
    }  _historyItem;
    double  _lastVisitedTime;
    struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> > > { 
        struct __compressed_pair<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> *, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> > > { 
            struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> {} *__value_; 
        } __ptr_; 
    }  _redirectURLs;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
