// PRINTING ARRAY OF OBEJECT  similar to for(auto i:araay)
var arrObj=[
  {sn:1, fn :"ramshish",sn:"thakur"},{sn:2,fn:"vardan",sn:"kumar"}
]
// {arrayname.map((arrayitem, index) => (
//     <li key={index}>{arrayitem.name}</li>
//   ))}
{arrObj.map(
  (item)=>{
console.log(item)
  }
)}