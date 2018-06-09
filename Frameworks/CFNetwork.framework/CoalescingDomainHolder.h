/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface CoalescingDomainHolder : NSObject {
    struct CoalescingDomain { 
        struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _DNS; 
        struct map<std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > > > > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > > > > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<std::__1::shared_ptr<__CoalescingConnectionKey>, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::shared_ptr<__CoalescingConnectionKey> > > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _ipAddressToConnectionKey; 
        struct map<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
            struct __tree<std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, CoalescingConnectionKeyComparator, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, CoalescingConnectionKeyComparator, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _connectionKeyToAllIPAddresses; 
        struct map<std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey> > > > { 
            struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey> > > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey> >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<__CoalescingConnectionKey> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _requestHostToConnectionKey; 
        struct map<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, CoalescingConnectionKeyComparator, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
            struct __tree<std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::__map_value_compare<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, CoalescingConnectionKeyComparator, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::__value_type<std::__1::shared_ptr<__CoalescingConnectionKey>, std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > >, CoalescingConnectionKeyComparator, true> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _connectionKeyToAllRequestHosts; 
    }  _coalescingDomain;
    PathPolicyManager * _pathPolicyManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoalescingConnectionHost:(id)arg1 withDNSRecord:(id)arg2 peerCerts:(id)arg3 trustData:(id)arg4 description:(id)arg5;
- (struct shared_ptr<__CoalescingConnectionKey> { struct __CoalescingConnectionKey {} *x1; struct __shared_weak_count {} *x2; })coalescingCoalescingConnectionHost:(id)arg1 ipAddrs:(id)arg2;
- (id)coalescingConnectionHostForRequestHost:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)pathIDForPath:(void*)arg1 lookup:(bool)arg2;
- (bool)removeCCEntryForHost:(id)arg1;
- (struct shared_ptr<__CoalescingConnectionKey> { struct __CoalescingConnectionKey {} *x1; struct __shared_weak_count {} *x2; })updateCoalescingConnectionWithHost:(id)arg1 ipAddrs:(id)arg2;

@end
