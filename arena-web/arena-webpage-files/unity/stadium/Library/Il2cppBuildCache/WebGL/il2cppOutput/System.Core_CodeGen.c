#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000050 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000060 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000061 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000062 System.Void System.Linq.Set`1::Resize()
// 0x00000063 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000064 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000065 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000066 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000068 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000072 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000073 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000074 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000076 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000082 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000083 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000085 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000086 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000008A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000091 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000095 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000096 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000097 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[151] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[151] = 
{
	2817,
	2817,
	2915,
	2915,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[50] = 
{
	{ 0x02000004, { 77, 4 } },
	{ 0x02000005, { 81, 9 } },
	{ 0x02000006, { 92, 7 } },
	{ 0x02000007, { 101, 10 } },
	{ 0x02000008, { 113, 11 } },
	{ 0x02000009, { 127, 9 } },
	{ 0x0200000A, { 139, 12 } },
	{ 0x0200000B, { 154, 1 } },
	{ 0x0200000C, { 155, 2 } },
	{ 0x0200000D, { 157, 12 } },
	{ 0x0200000E, { 169, 11 } },
	{ 0x02000010, { 180, 8 } },
	{ 0x02000012, { 188, 3 } },
	{ 0x02000013, { 193, 5 } },
	{ 0x02000014, { 198, 7 } },
	{ 0x02000015, { 205, 3 } },
	{ 0x02000016, { 208, 7 } },
	{ 0x02000017, { 215, 4 } },
	{ 0x02000018, { 219, 21 } },
	{ 0x0200001A, { 240, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 3 } },
	{ 0x06000010, { 42, 2 } },
	{ 0x06000011, { 44, 4 } },
	{ 0x06000012, { 48, 3 } },
	{ 0x06000013, { 51, 4 } },
	{ 0x06000014, { 55, 3 } },
	{ 0x06000015, { 58, 3 } },
	{ 0x06000016, { 61, 1 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 2 } },
	{ 0x0600001B, { 72, 5 } },
	{ 0x0600002B, { 90, 2 } },
	{ 0x06000030, { 99, 2 } },
	{ 0x06000035, { 111, 2 } },
	{ 0x0600003B, { 124, 3 } },
	{ 0x06000040, { 136, 3 } },
	{ 0x06000045, { 151, 3 } },
	{ 0x06000067, { 191, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[242] = 
{
	{ (Il2CppRGCTXDataType)2, 1637 },
	{ (Il2CppRGCTXDataType)3, 5478 },
	{ (Il2CppRGCTXDataType)2, 2727 },
	{ (Il2CppRGCTXDataType)2, 2346 },
	{ (Il2CppRGCTXDataType)3, 10494 },
	{ (Il2CppRGCTXDataType)2, 1736 },
	{ (Il2CppRGCTXDataType)2, 2353 },
	{ (Il2CppRGCTXDataType)3, 10512 },
	{ (Il2CppRGCTXDataType)2, 2348 },
	{ (Il2CppRGCTXDataType)3, 10501 },
	{ (Il2CppRGCTXDataType)2, 1638 },
	{ (Il2CppRGCTXDataType)3, 5479 },
	{ (Il2CppRGCTXDataType)2, 2749 },
	{ (Il2CppRGCTXDataType)2, 2355 },
	{ (Il2CppRGCTXDataType)3, 10519 },
	{ (Il2CppRGCTXDataType)2, 1754 },
	{ (Il2CppRGCTXDataType)2, 2363 },
	{ (Il2CppRGCTXDataType)3, 10538 },
	{ (Il2CppRGCTXDataType)2, 2359 },
	{ (Il2CppRGCTXDataType)3, 10528 },
	{ (Il2CppRGCTXDataType)2, 578 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)2, 1055 },
	{ (Il2CppRGCTXDataType)3, 4111 },
	{ (Il2CppRGCTXDataType)2, 579 },
	{ (Il2CppRGCTXDataType)3, 60 },
	{ (Il2CppRGCTXDataType)3, 61 },
	{ (Il2CppRGCTXDataType)2, 1065 },
	{ (Il2CppRGCTXDataType)3, 4115 },
	{ (Il2CppRGCTXDataType)3, 12309 },
	{ (Il2CppRGCTXDataType)2, 584 },
	{ (Il2CppRGCTXDataType)3, 92 },
	{ (Il2CppRGCTXDataType)2, 2064 },
	{ (Il2CppRGCTXDataType)3, 8327 },
	{ (Il2CppRGCTXDataType)3, 4546 },
	{ (Il2CppRGCTXDataType)3, 12282 },
	{ (Il2CppRGCTXDataType)2, 580 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)2, 659 },
	{ (Il2CppRGCTXDataType)3, 777 },
	{ (Il2CppRGCTXDataType)3, 778 },
	{ (Il2CppRGCTXDataType)2, 1737 },
	{ (Il2CppRGCTXDataType)3, 5846 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)2, 1192 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)2, 1370 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)3, 4113 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)2, 1193 },
	{ (Il2CppRGCTXDataType)2, 1291 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)2, 1292 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)3, 4114 },
	{ (Il2CppRGCTXDataType)2, 1570 },
	{ (Il2CppRGCTXDataType)2, 1288 },
	{ (Il2CppRGCTXDataType)2, 1369 },
	{ (Il2CppRGCTXDataType)2, 1278 },
	{ (Il2CppRGCTXDataType)2, 1279 },
	{ (Il2CppRGCTXDataType)2, 1366 },
	{ (Il2CppRGCTXDataType)3, 4110 },
	{ (Il2CppRGCTXDataType)2, 1191 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)2, 1287 },
	{ (Il2CppRGCTXDataType)2, 1368 },
	{ (Il2CppRGCTXDataType)3, 4112 },
	{ (Il2CppRGCTXDataType)2, 1190 },
	{ (Il2CppRGCTXDataType)3, 12271 },
	{ (Il2CppRGCTXDataType)3, 3541 },
	{ (Il2CppRGCTXDataType)2, 933 },
	{ (Il2CppRGCTXDataType)2, 1281 },
	{ (Il2CppRGCTXDataType)2, 1367 },
	{ (Il2CppRGCTXDataType)2, 1430 },
	{ (Il2CppRGCTXDataType)3, 5480 },
	{ (Il2CppRGCTXDataType)3, 5482 },
	{ (Il2CppRGCTXDataType)2, 392 },
	{ (Il2CppRGCTXDataType)3, 5481 },
	{ (Il2CppRGCTXDataType)3, 5490 },
	{ (Il2CppRGCTXDataType)2, 1641 },
	{ (Il2CppRGCTXDataType)2, 2349 },
	{ (Il2CppRGCTXDataType)3, 10502 },
	{ (Il2CppRGCTXDataType)3, 5491 },
	{ (Il2CppRGCTXDataType)2, 1332 },
	{ (Il2CppRGCTXDataType)2, 1395 },
	{ (Il2CppRGCTXDataType)3, 4122 },
	{ (Il2CppRGCTXDataType)3, 12262 },
	{ (Il2CppRGCTXDataType)2, 2360 },
	{ (Il2CppRGCTXDataType)3, 10529 },
	{ (Il2CppRGCTXDataType)3, 5483 },
	{ (Il2CppRGCTXDataType)2, 1640 },
	{ (Il2CppRGCTXDataType)2, 2347 },
	{ (Il2CppRGCTXDataType)3, 10495 },
	{ (Il2CppRGCTXDataType)3, 4121 },
	{ (Il2CppRGCTXDataType)3, 5484 },
	{ (Il2CppRGCTXDataType)3, 12261 },
	{ (Il2CppRGCTXDataType)2, 2356 },
	{ (Il2CppRGCTXDataType)3, 10520 },
	{ (Il2CppRGCTXDataType)3, 5497 },
	{ (Il2CppRGCTXDataType)2, 1642 },
	{ (Il2CppRGCTXDataType)2, 2354 },
	{ (Il2CppRGCTXDataType)3, 10513 },
	{ (Il2CppRGCTXDataType)3, 5896 },
	{ (Il2CppRGCTXDataType)3, 2956 },
	{ (Il2CppRGCTXDataType)3, 4123 },
	{ (Il2CppRGCTXDataType)3, 2955 },
	{ (Il2CppRGCTXDataType)3, 5498 },
	{ (Il2CppRGCTXDataType)3, 12263 },
	{ (Il2CppRGCTXDataType)2, 2364 },
	{ (Il2CppRGCTXDataType)3, 10539 },
	{ (Il2CppRGCTXDataType)3, 5511 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)2, 2362 },
	{ (Il2CppRGCTXDataType)3, 10531 },
	{ (Il2CppRGCTXDataType)3, 5512 },
	{ (Il2CppRGCTXDataType)2, 1335 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 4127 },
	{ (Il2CppRGCTXDataType)3, 4126 },
	{ (Il2CppRGCTXDataType)2, 2351 },
	{ (Il2CppRGCTXDataType)3, 10504 },
	{ (Il2CppRGCTXDataType)3, 12266 },
	{ (Il2CppRGCTXDataType)2, 2361 },
	{ (Il2CppRGCTXDataType)3, 10530 },
	{ (Il2CppRGCTXDataType)3, 5504 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)2, 2358 },
	{ (Il2CppRGCTXDataType)3, 10522 },
	{ (Il2CppRGCTXDataType)3, 4125 },
	{ (Il2CppRGCTXDataType)3, 4124 },
	{ (Il2CppRGCTXDataType)3, 5505 },
	{ (Il2CppRGCTXDataType)2, 2350 },
	{ (Il2CppRGCTXDataType)3, 10503 },
	{ (Il2CppRGCTXDataType)3, 12265 },
	{ (Il2CppRGCTXDataType)2, 2357 },
	{ (Il2CppRGCTXDataType)3, 10521 },
	{ (Il2CppRGCTXDataType)3, 5518 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)2, 2366 },
	{ (Il2CppRGCTXDataType)3, 10541 },
	{ (Il2CppRGCTXDataType)3, 5897 },
	{ (Il2CppRGCTXDataType)3, 2958 },
	{ (Il2CppRGCTXDataType)3, 4129 },
	{ (Il2CppRGCTXDataType)3, 4128 },
	{ (Il2CppRGCTXDataType)3, 2957 },
	{ (Il2CppRGCTXDataType)3, 5519 },
	{ (Il2CppRGCTXDataType)2, 2352 },
	{ (Il2CppRGCTXDataType)3, 10505 },
	{ (Il2CppRGCTXDataType)3, 12267 },
	{ (Il2CppRGCTXDataType)2, 2365 },
	{ (Il2CppRGCTXDataType)3, 10540 },
	{ (Il2CppRGCTXDataType)3, 4118 },
	{ (Il2CppRGCTXDataType)3, 4119 },
	{ (Il2CppRGCTXDataType)3, 4130 },
	{ (Il2CppRGCTXDataType)3, 95 },
	{ (Il2CppRGCTXDataType)3, 94 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)3, 4120 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)2, 1407 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 512 },
	{ (Il2CppRGCTXDataType)2, 585 },
	{ (Il2CppRGCTXDataType)3, 93 },
	{ (Il2CppRGCTXDataType)3, 96 },
	{ (Il2CppRGCTXDataType)3, 66 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)3, 9374 },
	{ (Il2CppRGCTXDataType)2, 1324 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)3, 9375 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)2, 389 },
	{ (Il2CppRGCTXDataType)2, 581 },
	{ (Il2CppRGCTXDataType)3, 65 },
	{ (Il2CppRGCTXDataType)3, 67 },
	{ (Il2CppRGCTXDataType)3, 3574 },
	{ (Il2CppRGCTXDataType)2, 947 },
	{ (Il2CppRGCTXDataType)2, 2824 },
	{ (Il2CppRGCTXDataType)3, 9371 },
	{ (Il2CppRGCTXDataType)3, 9372 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)3, 9373 },
	{ (Il2CppRGCTXDataType)2, 329 },
	{ (Il2CppRGCTXDataType)2, 582 },
	{ (Il2CppRGCTXDataType)3, 78 },
	{ (Il2CppRGCTXDataType)3, 8314 },
	{ (Il2CppRGCTXDataType)2, 2065 },
	{ (Il2CppRGCTXDataType)3, 8328 },
	{ (Il2CppRGCTXDataType)2, 660 },
	{ (Il2CppRGCTXDataType)3, 779 },
	{ (Il2CppRGCTXDataType)3, 8320 },
	{ (Il2CppRGCTXDataType)3, 2934 },
	{ (Il2CppRGCTXDataType)2, 419 },
	{ (Il2CppRGCTXDataType)3, 8315 },
	{ (Il2CppRGCTXDataType)2, 2061 },
	{ (Il2CppRGCTXDataType)3, 809 },
	{ (Il2CppRGCTXDataType)2, 674 },
	{ (Il2CppRGCTXDataType)2, 911 },
	{ (Il2CppRGCTXDataType)3, 2940 },
	{ (Il2CppRGCTXDataType)3, 8316 },
	{ (Il2CppRGCTXDataType)3, 2929 },
	{ (Il2CppRGCTXDataType)3, 2930 },
	{ (Il2CppRGCTXDataType)3, 2928 },
	{ (Il2CppRGCTXDataType)3, 2931 },
	{ (Il2CppRGCTXDataType)2, 907 },
	{ (Il2CppRGCTXDataType)2, 2793 },
	{ (Il2CppRGCTXDataType)3, 4117 },
	{ (Il2CppRGCTXDataType)3, 2933 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)3, 2932 },
	{ (Il2CppRGCTXDataType)2, 1194 },
	{ (Il2CppRGCTXDataType)2, 2752 },
	{ (Il2CppRGCTXDataType)2, 1305 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)3, 3557 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)3, 4407 },
	{ (Il2CppRGCTXDataType)3, 4408 },
	{ (Il2CppRGCTXDataType)3, 4413 },
	{ (Il2CppRGCTXDataType)2, 1439 },
	{ (Il2CppRGCTXDataType)3, 4410 },
	{ (Il2CppRGCTXDataType)3, 12611 },
	{ (Il2CppRGCTXDataType)2, 912 },
	{ (Il2CppRGCTXDataType)3, 2950 },
	{ (Il2CppRGCTXDataType)1, 1262 },
	{ (Il2CppRGCTXDataType)2, 2764 },
	{ (Il2CppRGCTXDataType)3, 4409 },
	{ (Il2CppRGCTXDataType)1, 2764 },
	{ (Il2CppRGCTXDataType)1, 1439 },
	{ (Il2CppRGCTXDataType)2, 2822 },
	{ (Il2CppRGCTXDataType)2, 2764 },
	{ (Il2CppRGCTXDataType)3, 4414 },
	{ (Il2CppRGCTXDataType)3, 4412 },
	{ (Il2CppRGCTXDataType)3, 4411 },
	{ (Il2CppRGCTXDataType)2, 272 },
	{ (Il2CppRGCTXDataType)3, 2959 },
	{ (Il2CppRGCTXDataType)2, 402 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	151,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	50,
	s_rgctxIndices,
	242,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
