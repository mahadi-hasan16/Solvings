/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
function solve(node, list) {
    if (!node)
        return;
    solve(node.left, list);
    list.push(node.val);
    solve(node.right, list);
}
var inorderTraversal = function (root) {
    let list = [];
    solve(root, list);
    return list;
};
